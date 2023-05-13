class Solution{
public:
 void solve(int n, vector < vector < int >> & res, vector < int > & temp, vector < int > & left, vector < int > & up, vector < int > & lo, int col)

 {

   if (n == col)

   {

     res.push_back(temp);

     return;

   }

   for (int row = 0; row < n; row++)

   {

     if (left[row] == 0 && up[n - 1 + col - row] == 0 && lo[row + col] == 0)

     {

       temp[row] = col + 1;

       left[row] = 1;

       up[n - 1 + col - row] = 1;

       lo[col + row] = 1;

       solve(n, res, temp, left, up, lo, col + 1);
      // backtracking
       left[row] = 0;

       up[n - 1 + col - row] = 0;

       lo[col + row] = 0;

     }

   }

 }

 public:

   vector < vector < int >> nQueen(int n) {

     vector < vector < int >> res;

     vector < int > temp(n, 0);

     vector < int > left(n, 0);

     vector < int > up(n * 2 - 1, 0);

     vector < int > lo(n * 2 - 1, 0);

     solve(n, res, temp, left, up, lo, 0);

     sort(res.begin(), res.end());

     return res;

   }

 };
