import java.util.*;
import java.util.Set;

class Solution {
    public int robotSim(int[] commands, int[][] obstacles) {
        final int RIGHT = 0, DOWN = 1, LEFT = 2, UP = 3;
        int x = 0, y = 0, direction = UP, maxDistance = 0;
        Set<Long> obstacleSet = new HashSet();
        for (int[] obstacle : obstacles) {
            obstacleSet.add((long) 100001 * obstacle[0] + obstacle[1]);
        }
        for (int command : commands) {
            if (command == -1) {
                direction = (direction + 1) % 4;
            } else if (command == -2) {
                direction = (direction + 4 - 1) % 4;
            } else {
                for (int i = 0; i < command; i++) {
                    int nextX = (direction == RIGHT) ? x + 1 : (direction == LEFT) ? x - 1 : x;
                    int nextY = (direction == UP) ? y + 1 : (direction == DOWN) ? y - 1 : y;
                    if (obstacleSet.contains((long) 100001 * nextX + nextY)) {
                        break;
                    }
                    x = nextX;
                    y = nextY;
                }
            }
            maxDistance = Math.max(maxDistance, x * x + y * y);
        }
        return maxDistance;
    }
}
