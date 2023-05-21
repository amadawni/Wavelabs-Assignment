# Wavelabs-Assignment


There is an infrastructure of n Labs with some number of cables connecting these labs. Each cable[i] = [ai, bi] indicates that there is a bidirectional cable between labs ai and bi.
The network rank of two different labs is defined as the total number of directly connected cables to either lab. If a cable is directly connected to both labs, it is only counted once.
The maximal network rank of the infrastructure is the maximum network rank of all pairs of different labs.
Given the integer n and the array cables, return the maximal network rank of the entire infrastructure.

![image](https://github.com/amadawni/Wavelabs-Assignment/assets/61642500/705ddd06-51ba-41bf-92f3-beaff6f312df)

Input: n = 4, cables = [[0,1],[0,3],[1,2],[1,3]]
Output: 4
Explanation: The network rank of labs 0 and 1 is 4 as there are 4 cables that are connected to either 0 or 1. The cable between 0 and 1 is only counted once.
Constraints:
●	2 <= n <= 100
●	0 <= roads.length <= n * (n - 1) / 2
●	roads[i].length == 2
●	0 <= ai, bi <= n-1
●	ai != bi
●	Each pair of cities has at most one road connecting them.
