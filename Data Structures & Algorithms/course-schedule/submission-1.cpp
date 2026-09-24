class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
       vector<vector<int>> preReq(numCourses);
       vector<int> incoming(numCourses,0);

       for (vector<int> req: prerequisites){
        int course = req[1];
        preReq[course].push_back(req[0]); 
        incoming[req[0]]++;
       }
       queue<int> q;

       for(int i = 0 ; i < incoming.size(); i++){
        if(incoming[i] == 0) q.push(i);
       }
    int count = 0;
      while (!q.empty()){
        int curr = q.front();
        count++;
        q.pop();
        for( int adjCourse:preReq[curr] ){
            incoming[adjCourse]--;
            if(incoming[adjCourse] == 0){
             q.push(adjCourse);
            }
        }
      }  
    return count ==numCourses;
    }
};
