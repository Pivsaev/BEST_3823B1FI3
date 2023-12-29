int get_score(short score, int start, int stop, int now) 
{
    if (now <= start){
        return score;
    }
    if (now >= stop){
        return (score+1)/2;
    }
    if ((now > start) && (now < stop)){
        float res,score_half;
        int ans, res_int;
        score_half = score/2;
        res = score_half / (stop - start) * (now - start) + 0.1;
        res_int = res; 
        ans = score - res_int;
        return ans;
        }  
}