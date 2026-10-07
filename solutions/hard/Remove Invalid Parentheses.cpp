// Title: Remove Invalid Parentheses
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/remove-invalid-parentheses/

                    if(curr[i] != '(' && curr[i] != ')')
                        continue;
                    string next = curr.substr(0, i) + curr.substr(i + 1);
                    if(!visited.count(next)) {
                        visited.insert(next);
                        q.push(next);
                    }
                }
            }
            if(found) break;
        }
        return ans;
    }
};
