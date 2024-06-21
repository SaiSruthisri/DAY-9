# DAY-9
Product of Array except itself
Problem Statement 
In the resulting vector in place of each element should be product of its left & right elements except itself.
No division should be used & algorithm derived should run in O(N).

Solution Approach
Create a left vector intialise it to 1 (cause you are doing products) run it 1 to n-1 to get left products of each element.Simalar process is repeated for right side n-2 to 0.
