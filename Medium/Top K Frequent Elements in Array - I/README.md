<h2><a href="https://www.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1">Top K Frequent Elements in Array - I</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a non-empty array <strong>nums[]</strong> of integers of length <strong>N</strong>, find the <strong>top k</strong> elements which have the <strong>highest frequency </strong>in the array. If two numbers have <strong>same frequencies</strong>, then the <strong>larger number </strong>should be given more preference.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 6
nums = {1,1,1,2,2,3}
k = 2
<strong>Output: </strong>{1, 2}</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 8
nums = {1,1,2,2,3,3,3,4}
k = 2
<strong>Output: </strong>{3, 2}<strong>
Explanation: </strong>Elements 1 and 2 have the
same frequency ie. 2. Therefore, in this
case, the answer includes the element 2
as 2 &gt; 1.</span></pre>
<p><span style="font-size: 18px;"><strong>User Task:</strong><br>You don't have to read or print anything. You will have to complete the function <strong>topK()</strong> that takes an array <strong>nums[] </strong>and integer <strong>k</strong> as input and returns a list of <strong>top k most frequent elements</strong>. If any two elements have <strong>same frequencies</strong>, then give <strong>more preference </strong>to the <strong>larger elemet</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity</strong> : O(NlogN)<br><strong>Expected Auxilliary Space</strong> : O(N)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints: </strong></span><br><span style="font-size: 18px;">1 &lt;= N &lt;= 10<sup>5</sup><br>1&lt;= nums[i] &lt;=10<sup>5<br></sup></span><span style="font-size: 18px;">1 &lt;= k &lt;= N</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;<code>Sorting</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;