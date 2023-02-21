<h2><a href="https://practice.geeksforgeeks.org/problems/geek-and-strings3030/0">Geek and Strings</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Geek has a list Li containing (not necessarily distinct) N words and Q queries. Each query consists of a string x. For each query, find how many strings in the List Li has the string x as its prefix.&nbsp;</span></p>

<p><br>
<strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input: </strong>
N = 5, Q = 5
li[] = {'abracadabra', 'geeksforgeeks', 
      'abracadabra', 'geeks', 'geeksthrill'}
query[] = {'abr', 'geeks', 'geeksforgeeks', 
&nbsp;        'ge', 'gar'}</span>

<span style="font-size:18px"><strong>Output:</strong> 2 3 1 3 0</span>

<span style="font-size:18px"><strong>Explaination: </strong>
<strong>Query 1: </strong>The string 'abr' is prefix of 
two 'abracadabra'. 
<strong>Query 2: </strong>The string 'geeks' is prefix of three 
strings 'geeksforgeeks', 'geeks' and 'geeksthrill'. 
<strong>Query 3: </strong>The string 'geeksforgeeks' is prefix 
of itself present in li. 
<strong>Query 4: </strong>The string 'ge' also is prefix of three 
strings 'geeksforgeeeks', 'geeks', 'geeksthrill'. 
<strong>Query 5: </strong>The string 'gar' is not a prefix of any 
string in li.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Your task is to complete the function <strong>prefixCount() </strong>which takes N, Q, li[] and query[] as input parameters and returns a list containing the count of prefixes for each query.&nbsp;</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(Q*x) + O(N*L) Where Q is the number of queries, x is the longest word in the query, N = number of words inserted in Trie and L = length of longest word inserted in Trie.<br>
<strong>Expected Auxiliary Space:</strong> O(N*List [i])</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 3 x 10<sup>4</sup><br>
1 ≤ Q ≤ 10<sup>4</sup><br>
1 ≤ |li[i]|, |x| ≤ 100 &nbsp;</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Tree</code>&nbsp;<code>Trie</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;<code>Advanced Data Structure</code>&nbsp;