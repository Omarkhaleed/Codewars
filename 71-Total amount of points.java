public class TotalPoints {
  
    public static int points(String[] games) {
          int score = 0;
        for (int i = 0; i < games.length; i++)
            if (games[i].charAt(0)>games[i].charAt(2)) score += 3;
            else if (games[i].charAt(0)==games[i].charAt(2)) score += 1;
        return score;
    }

}
