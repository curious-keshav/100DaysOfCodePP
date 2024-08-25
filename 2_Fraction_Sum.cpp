#define ll long long

class Solution {
public:
    ll gcd(ll a, ll b) { return b == 0 ? abs(a) : gcd(b, a % b); }

    string fractionAddition(string expression) {
        vector<string> str;
        ll i = 0;

        while (i < expression.size()) {
            string tempString;
            if (expression[i] == '-' or expression[i] == '+') {
                tempString.push_back(expression[i]);
                i++;
            }
            while (i < expression.size() and expression[i] != '-' and
                   expression[i] != '+') {
                tempString += expression[i];
                i++;
            }
            str.push_back(tempString);
        }

        ll denominator = 1;
        ll numerator = 0;

        vector<pair<ll, ll>> pr;

        for (ll i = 0; i < str.size(); i++) {
            if (str[i][str[i].size() - 1] == '0') {
                denominator *= 10;
            } else {
                denominator *= (str[i][str[i].size() - 1] - '0');
            }
        }


        for (ll i = 0; i < str.size(); i++) {
            ll j = 0;
            string temp1 = "";
            string temp2 = "";
            while (j < str[i].size() and str[i][j] != '/') {
                if (str[i][j] == '+' or str[i][j] == '-') {
                    j++;
                    continue;
                } else {
                    temp1 += str[i][j];
                }
                j++;
            }
            if (str[i][j] == '/') { j++; }
            while (j < str[i].size()) {
                temp2 += str[i][j];
                j++;
            }
            pr.push_back({stoi(temp1), stoi(temp2)});
        }

        for (ll i = 0; i < pr.size(); i++) {
            ll temp = denominator / pr[i].second;
            if (str[i][0] == '-') {
                numerator -= (pr[i].first * temp);
            } else {
                numerator += (pr[i].first * temp);
            }
        }

        if (numerator == 0) { return "0/1"; }

        ll gcdFinal = gcd(abs(numerator), denominator);
        return to_string(numerator / gcdFinal) + "/" +
               to_string(denominator / gcdFinal);
    }
};
