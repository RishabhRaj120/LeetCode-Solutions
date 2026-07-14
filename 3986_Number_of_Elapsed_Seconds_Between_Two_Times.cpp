class Solution
{
public:
    int secondsBetweenTimes(string startTime, string endTime)
    {
        vector<int> v1;
        vector<int> v2;
        int n = (int)startTime.length();
        string s1 = startTime;
        string s2 = endTime;
        string s3 = "";
        for (int i = 0; i < n; i++)
        {
            if (s1.at(i) == ':')
            {
                v1.push_back(stoi(s3));
                s3 = "";
            }
            else
            {
                s3 += s1.at(i);
            }
        }
        v1.push_back(stoi(s3));
        s3 = "";
        for (int i = 0; i < n; i++)
        {
            if (s2.at(i) == ':')
            {
                v2.push_back(stoi(s3));
                s3 = "";
            }
            else
            {
                s3 += s2.at(i);
            }
        }

        v2.push_back(stoi(s3));
        s3 = "";
        int time1 = 0;
        int time2 = 0;
        time1 += (v1[0] * 3600 + v1[1] * 60 + v1[2]);
        time2 += (v2[0] * 3600 + v2[1] * 60 + v2[2]);
        return time2 - time1;
    }
};