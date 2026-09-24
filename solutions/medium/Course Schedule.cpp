// Title: Course Schedule
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/course-schedule/

        int count = 0;
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            count++;
            for (auto nbr : graph[curr]) {
                indegree[nbr]--;
                if (indegree[nbr] == 0) {
                    q.push(nbr);
                }
            }
        }
        return count == numCourses;
    }
};
