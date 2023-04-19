<h2><a href="https://practice.geeksforgeeks.org/problems/904237fa926d79126d42c437802b04287ea9d1c8/1">Geek and Number String</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Geek has a string&nbsp;<strong>S</strong>of size&nbsp;<strong>N</strong>consisting&nbsp;of characters from&nbsp;<strong>'0'</strong>to '<strong>9'.</strong>&nbsp;He wants to minimise&nbsp;the length of the string. In each minimising operation, geek can remove&nbsp;any two consecutive characters if they are of the form&nbsp;<strong>{"12", "21", "34", "43", "56", "65", "78", "87", "09", "90"}</strong>.<br>
Find the minimum possible length of the string after applying minimising operations.&nbsp;</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>N = 5<strong> 
</strong>S = "12213"
<strong>Output:</strong> 1
<strong>Explanation: </strong>Geek can get the string of 
length 1 in two minimising operation,
In 1st operation Geek will remove "12" 
from "<strong>12</strong>213" then Geek left with "213"
In 2nd operation Geek will remove "21" 
from "<strong>21</strong>3" then Geek left with "3"</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: 
</strong>N = 4
S = "1350"
<strong>Output:</strong> 4
<strong>Explanation: </strong>Can't remove any character.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task: &nbsp;</strong><br>
You don't need to read input or print anything. Complete the function<strong>minLength()&nbsp;</strong>which takes N and S as input parameters&nbsp;and returns the the minimum possible length of the string.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br>
<strong>Expected Auxiliary Space:</strong>O(N)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;