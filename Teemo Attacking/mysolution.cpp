/*
- At first, I found this problem interesting because it's based on a popular MOBA game called "League of Legends", which was a huge part of my childhood. I think anyone who has played a game like this would be able to solve it easily
- The solution is pretty simple: there are two possible probabilities:
    * Duration ≥ deltaT (where deltaT is the difference between two time marks).
    * Duration < deltaT.
- Once you understand this mechanism, it becomes easy to find the total of the smaller of the two values (and don’t forget to add the duration at the end)  
*/
int findPoisonedDuration(vector<int>& timeSeries, int duration) {
    int res = 0, size = timeSeries.size();
    for(int i = 0; i< size -1 ; i++){
        int deltaT = timeSeries[i+1] - timeSeries[i];
        if(deltaT > duration) res+= duration;
        else res+= deltaT;
    }
    return res+duration;