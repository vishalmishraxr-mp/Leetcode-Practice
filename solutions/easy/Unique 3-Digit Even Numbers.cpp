// Title: Unique 3-Digit Even Numbers
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/unique-3-digit-even-numbers/

                    if (arr[k] % 2 != 0) continue;

                    int num = arr[i] * 100 + arr[j] * 10 + arr
                    [k];
                    st.insert(num);
                }
            }
        }
        return st.size();
    }
};
