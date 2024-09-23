#include <bits/stdc++.h>
using namespace std;

bool isKeyword(const string& word)
{
    const vector<string> keywords = { "if", "else", "for", "while", "return", "int", "float", "char", "double", "main", "printf" };
    return find(keywords.begin(), keywords.end(), word) != keywords.end();
}

string classifyToken(const string& token)
{
    if (isKeyword(token))
        {
        return "KEYWORD";
    } else if (isalpha(token[0]) || token[0] == '_')
    {
        return "IDENTIFIER";
    } else if (token.find('.') != string::npos)
    {
        return "FLOAT";
    } else if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-' && isdigit(token[1])))
    {
        return "INTEGER";
    } else {
        return "SEPARATOR";
    }
}

vector<pair<string, string>> tokenize(const string& code)
 {
    vector<pair<string, string>> tokens;
    string currentToken;

    for (size_t i = 0; i < code.length(); ++i)
        {
        char c = code[i];

        if (isspace(c))
            {
            continue;
        }

        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '=')
            {
            tokens.push_back(make_pair("OPERATOR", string(1, c)));
            continue;
        }

        if (isalpha(c) || c == '_')
            {
            currentToken.clear();
            while (isalnum(c) || c == '_')
            {
                currentToken += c;
                c = code[++i];
                if (i >= code.length()) break;
            }
            i--;
            tokens.push_back(make_pair(classifyToken(currentToken), currentToken));
            continue;
        }


        if (isdigit(c) || (c == '-' && i + 1 < code.length() && isdigit(code[i + 1])))
            {
            currentToken.clear();
            bool hasDecimalPoint = false;
            while (isdigit(c) || c == '.')
            {
                if (c == '.')
                {
                    if (hasDecimalPoint) break;
                    hasDecimalPoint = true;
                }
                currentToken += c;
                c = code[++i];
                if (i >= code.length()) break;
            }
            i--;
            tokens.push_back(make_pair(classifyToken(currentToken), currentToken));
            continue;
        }

        tokens.push_back(make_pair("SEPARATOR", string(1, c)));
    }

    return tokens;
}

void printTokens(const vector<pair<string, string>>& tokens)
{
    for (const auto& token : tokens) {
        cout << "Token: " << token.second << ", Type: " << token.first << endl;
    }
}

int main()
 {
    string code;

    cout << "Enter code: ";
    getline(cin, code);

    vector<pair<string, string>> tokens = tokenize(code);

    printTokens(tokens);

    return 0;
}



