class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int move=0;
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        for (auto [seats, students] : std::views::zip(seats, students)) {
            move+=abs(seats-students);
}
    return move;
    }
};