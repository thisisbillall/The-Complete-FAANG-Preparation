// Practice > Data Structures > Arrays2D > Array-DS

<<<<<<< HEAD:3]. Competitive Programming/03]. HackerRank/1]. Practice/08]. Problem Solving/Data Structures/C++/2D_Array-DS.cpp
Problem Link - https://www.hackerrank.com/challenges/2d-array
=======
// Problem Link - https://www.hackerrank.com/challenges/2d-array/submissions/code/229967785
>>>>>>> 742eaddb41ea54a53db159ea2205989830459995:3]. Competitive Programming/03]. HackerRank/1]. Practice/08]. Problem Solving/Data Structures/01]. Arrays/C++/2D_Array-DS.cpp

int hourglassSum(vector<vector<int>> arr) {
        
        int max_sum=-63;
        
        for(int i=0;i<arr.size()-2;i++){
            for(int j=0;j<arr[0].size()-2;j++){
                
                int current_sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]
                +arr[i+1][j+1]
                +arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
                max_sum = std::max(current_sum,max_sum);
            }
            cout<<endl;
            
        }
        return max_sum;
}
