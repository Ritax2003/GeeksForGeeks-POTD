<h2><a href="https://practice.geeksforgeeks.org/problems/find-the-closest-element-in-bst/1">Find the Closest Element in BST</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a <strong><a href="http://quiz.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/">BST</a></strong>&nbsp;and an integer. Find the least absolute difference between any node value of the BST and the given integer.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>        10
&nbsp;     /   \
&nbsp;    2    11
&nbsp;  /  \ 
&nbsp; 1    5
&nbsp;     /  \
&nbsp;    3    6
&nbsp;     \
&nbsp;      4
K = 13
<strong>Output: </strong>2<strong>
Explanation: </strong>K=13. The node that has
value nearest to K is 11. so the answer
is 2</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>      8
&nbsp;   /   \
&nbsp;  1     9
&nbsp;   \     \
&nbsp;    4    10
&nbsp;   /
&nbsp;  3
K = 9
<strong>Output: </strong>0<strong>
Explanation: </strong>K=9. The node that has
value nearest to K is 9. so the answer
is 0.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function</span><span style="font-size: 18px;"><strong> minDiff()&nbsp;</strong>that takes&nbsp;the root of the BST and an integer K as its input and returns the minimum absolute difference between any node value of the BST and the integer K.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(Height of the BST).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(Height of the BST).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= Number of nodes&nbsp;&lt;= 100000</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>MAQ Software</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;