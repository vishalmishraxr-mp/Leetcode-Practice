// Title: Course Schedule II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/course-schedule-ii/

            int curr = q.front();
            result.push_back(curr);
            q.pop();
            count++;
            for (auto nbr : graph[curr]) {
                indegree[nbr]--;
                if (indegree[nbr] == 0) {
                    q.push(nbr);
                }
            }
        }
        if(count==numCourses) return result;
        return {};
    }
};
