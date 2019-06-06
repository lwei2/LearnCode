# Collect More Jewels
# Problem Description
It is written in the Book of The Lady: After the Creation, the cruel god Moloch rebelled against the authority of Marduk the Creator.Moloch stole from Marduk the most powerful of all the artifacts of the gods, the Amulet of Yendor, and he hid it in the dark cavities of Gehennom, the Under World, where he now lurks, and bides his time.

Your goddess The Lady seeks to possess the Amulet, and with it to gain deserved ascendance over the other gods.

You, a newly trained Rambler, have been heralded from birth as the instrument of The Lady. You are destined to recover the Amulet for your deity, or die in the attempt. Your hour of destiny has come. For the sake of us all: Go bravely with The Lady!

If you have ever played the computer game NETHACK, you must be familiar with the quotes above. If you have never heard of it, do not worry. You will learn it (and love it) soon.

In this problem, you, the adventurer, are in a dangerous dungeon. You are informed that the dungeon is going to collapse. You must find the exit stairs within given time. However, you do not want to leave the dungeon empty handed. There are lots of rare jewels in the dungeon. Try collecting some of them before you leave. Some of the jewels are cheaper and some are more expensive. So you will try your best to maximize your collection, more importantly, leave the dungeon in time.

Input
Standard input will contain multiple test cases. The first line of the input is a single integer T (1 <= T <= 10) which is the number of test cases. T test cases follow, each preceded by a single blank line.

The first line of each test case contains four integers W (1 <= W <= 50), H (1 <= H <= 50), L (1 <= L <= 1,000,000) and M (1 <= M <= 10). The dungeon is a rectangle area W block wide and H block high. L is the time limit, by which you need to reach the exit. You can move to one of the adjacent blocks up, down, left and right in each time unit, as long as the target block is inside the dungeon and is not a wall. Time starts at 1 when the game begins. M is the number of jewels in the dungeon. Jewels will be collected once the adventurer is in that block. This does not cost extra time.

The next line contains M integers，which are the values of the jewels.

The next H lines will contain W characters each. They represent the dungeon map in the following notation:
> [*] marks a wall, into which you can not move;
> [.] marks an empty space, into which you can move;
> [@] marks the initial position of the adventurer;
> [<] marks the exit stairs;
> [A] - [J] marks the jewels.
 

Output
Results should be directed to standard output. Start each case with "Case #:" on a single line, where # is the case number starting from 1. Two consecutive cases should be separated by a single blank line. No blank line should be produced after the last test case.

If the adventurer can make it to the exit stairs in the time limit, print the sentence "The best score is S.", where S is the maximum value of the jewels he can collect along the way; otherwise print the word "Impossible" on a single line.

Sample Input
3

4 4 2 2
100 200
****
*@A*
*B<*
****

4 4 1 2
100 200
****
*@A*
*B<*
****

12 5 13 2
100 200
************
*B.........*
*.********.*
*@...A....<*
************

Sample Output
Case 1:
The best score is 200.

Case 2:
Impossible

Case 3:
The best score is 300.










