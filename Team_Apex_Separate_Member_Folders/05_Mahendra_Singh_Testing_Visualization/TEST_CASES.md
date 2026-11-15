# Test cases
1. Empty grid: BFS, Dijkstra and A* should find a route.
2. Same start and destination: a route containing one cell should be reported.
3. Destination enclosed by walls: report no path.
4. Full vertical wall: report no path unless a gap exists.
5. Random walls: verify the application remains responsive and reports a valid route or no route.
6. DFS: route may be longer than the shortest route; this is expected.
7. Move start/destination: verify both markers move and are never placed inside a wall.