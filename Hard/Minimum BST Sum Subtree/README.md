<h2><a href="https://practice.geeksforgeeks.org/problems/d064cc0468a5c2bb7817ecd7c1bc59ce25e23613/1">Minimum BST Sum Subtree</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a binary tree and a target, find the length of minimum sub-tree with the given sum equal to target which is also a binary search tree.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
           13
         /    \
       5       23
      / \      / \
     N   17   N   N
&nbsp;        /
&nbsp;       16
<strong>Target</strong>: 38
<strong>Output:</strong> 3
<strong>Explanation</strong>: 5,17,16 is the smallest subtree
with length 3.</span></pre>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
             7
           /   \
          N    23
             /   \
            10    23
&nbsp;          /  \   / \
&nbsp;         N   17 N   N
<strong>Target</strong>: 73
<strong>Output:</strong> -1
<strong>Explanation</strong>: No subtree is bst for the given target.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong> &nbsp;<br>
You don't need to read input or print anything. Your task is to complete the function <strong>minSubtreeSumBST</strong>() which takes the tree <strong>root</strong> and <strong>target</strong> as input parameters and returns length of largest subtree having sum equal to the target which is also a binary search tree.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>:O(n)</span><br>
<span style="font-size:18px"><strong>Expected Space Complexity:</strong>O(1)&nbsp;</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10^5</span></p>
</div>