<h2><a href="https://www.geeksforgeeks.org/problems/c-letters-collection4552/1">Letters Collection</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">The Postmaster wants&nbsp;to write a program to answer the queries regarding letter collection in a city. A city is represented as a matrix <strong>mat</strong> of size<strong> n*m.</strong> Each cell represents a house and contains letters which are denoted by a number in the&nbsp;cell. The program should answer&nbsp;<strong>q </strong>queries which are of following types:<br><strong>1 i j&nbsp;</strong>: To sum all the letters which are at a 1-hop distance from the cell (i,j) in any direction<br><strong>2 i j :&nbsp;</strong>To sum all the letters which are at a 2-hop distance from the cell (i,j) in any direction&nbsp;<br>The queries are given in a 2D matrix&nbsp;<strong>queries[][]</strong>.<br>In one hop distance p</span><span style="font-size: 18px;">ostmaster</span><span style="font-size: 18px;"> can go to any of [</span><span style="font-size: 18px;">(i-1,j-1), (i-1,j), (i-1,j+1), </span><span style="font-size: 18px;">(i,j-1), (i,j+1), (i+1,j-1), (i+1,j), (i+1,j+1)] from (i,j).&nbsp;</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> 
n = 4, m = 5
mat = {{1, 2, 3, 4, 10}, 
&nbsp;      {5, 6, 7, 8, 10}, 
&nbsp;      {9, 1, 3, 4, 10}, 
&nbsp;      {1, 2, 3, 4, 10}}
q = 2
queries = {{1 0 1}, 
&nbsp;          {2 0 1}}
<strong>Output:</strong> <br>22 29
<strong>Explaination:</strong> 
For the first query sum is 1+5+6+7+3 = 22. 
For the second query sum is 9+1+3+4+8+4 = 29.<br></span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> 
n = 6, m = 6
mat = {{ 1,  2,  3,  4,  5,  6}, 
&nbsp;      { 7,  8,  9, 10, 11, 12}, 
&nbsp;      {13, 14, 15, 16, 17, 18}, 
&nbsp;      {19, 20, 21, 22, 23, 24},<br>       {25, 26, 27, 28, 29, 30},<br>       {31, 32, 33, 34, 35, 36}}
q = 1
queries = {{2 3 2}}
<strong>Output:</strong> <br>336
<strong>Explaination:</strong> 
The first query sum is 7+8+9+10+11+17+23+29+35+34+33+32+31+25+19+13 = 336.</span> </pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to&nbsp;read input or print anything. Your task is to complete the function <strong>matrixSum()</strong> which takes <strong>n</strong>, <strong>m</strong>, <strong>mat</strong>, <strong>q </strong>and <strong>queries </strong>as input parameters and returns a list of integers where the ith value is the answers for ith query.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(q)<br><strong>Expected Auxiliary Space:</strong> O(q)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n, m ≤ 10<sup>3</sup><br>0&nbsp;</span><span style="font-size: 18px;">≤</span><span style="font-size: 18px;"> mat[i][j]&nbsp;</span><span style="font-size: 18px;">≤ 10<sup>7</sup></span><span style="font-size: 18px;"><br></span><span style="font-size: 18px;">1 ≤ q ≤ 10<sup>5</sup><br>1 </span><span style="font-size: 18px;">≤ q[i][0] </span><span style="font-size: 18px;">≤ 2<br></span><span style="font-size: 18px;">0 </span><span style="font-size: 18px;">≤ q[i][1] &lt; n</span><span style="font-size: 18px;"><br></span><span style="font-size: 18px;">0 </span><span style="font-size: 18px;">≤ q[i][2] &lt; m</span><span style="font-size: 18px;"><br></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;<code>CPP</code>&nbsp;<code>Data Structures</code>&nbsp;