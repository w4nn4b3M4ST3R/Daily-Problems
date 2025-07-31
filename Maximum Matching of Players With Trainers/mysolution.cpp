/*
- Sort these two vectors
- If trainers[j] cant match with players[i], it means he cant match with any players after players[i] either. Also, the trainers and players before i and j are already matched, so we dont need to iterate again from the beginning
--> Therefore, we use 2 pointers to iterate, reducing time complexity to O(m + n) (where m, n are the sizes of 2 vectors),as opposed to O (m*n) (which would occur with nested loops)
*/
int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int count = 0, pp=0,tp=0, psize = players.size(), tsize = trainers.size();
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        while(tp < tsize && pp < psize){
            if (trainers[tp] < players[pp]) tp++;
            else{
                tp++;
                pp++;
                count++;
            }
        }
        return count;
    }