int hotelBookings(vector<string> queries) {
    // Write your codes here.
    int cnt=0;
      for(int i=0;i<queries.size();i++)
      {
          string s=queries[i];
          if(s[0]=='+') cnt++;
      }
      return cnt;
}
