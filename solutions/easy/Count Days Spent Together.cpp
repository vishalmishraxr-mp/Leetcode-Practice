// Title: Count Days Spent Together
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/count-days-spent-together/

class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string 
    arriveBob, string leaveBob) {
        int n = arriveAlice.size();

        // start month
        string sb1 = arriveAlice.substr(0,2);
        string sb2 = arriveBob.substr(0,2);
        int st_month = max(stoi(sb1),stoi(sb2));

        // end month
        string sb3 = leaveAlice.substr(0,2);
        string sb4 = leaveBob.substr(0,2);
        int end_month = min(stoi(sb3),stoi(sb4));

        // start date
        string sb5 = arriveAlice.substr(3,5);
