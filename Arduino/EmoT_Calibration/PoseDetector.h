class PoseDetector {

  public:
 enum Pose {question,vsign,arm,standing,beer,sushi};
 static double classify(int i[5])
     {

    double p = -1;
    p = PoseDetector::N3bb25aa634(i);
    return p;
  }
  static double N3bb25aa634(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 0;
      } else if (i[0] <= 11708.0) {
    p = PoseDetector::N3a5d66e835(i);
    } else if (i[0] > 11708.0) {
    p = PoseDetector::N567172fc43(i);
    } 
    return p;
  }
  static double N3a5d66e835(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 3;
    } else if (i[1] <= 9112.0) {
      p = 3;
    } else if (i[1] > 9112.0) {
    p = PoseDetector::N4a0f274736(i);
    } 
    return p;
  }
  static double N4a0f274736(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 1;
    } else if (i[0] <= 10974.0) {
    p = PoseDetector::N28dbcc4d37(i);
    } else if (i[0] > 10974.0) {
    p = PoseDetector::N32a6d5b42(i);
    } 
    return p;
  }
  static double N28dbcc4d37(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 1;
    } else if (i[1] <= 9974.0) {
      p = 1;
    } else if (i[1] > 9974.0) {
    p = PoseDetector::N7641e82f38(i);
    } 
    return p;
  }
  static double N7641e82f38(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 1;
    } else if (i[0] <= 10889.0) {
      p = 1;
    } else if (i[0] > 10889.0) {
    p = PoseDetector::N60f2a25039(i);
    } 
    return p;
  }
  static double N60f2a25039(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 1;
    } else if (i[1] <= 10129.0) {
    p = PoseDetector::N597e63e940(i);
    } else if (i[1] > 10129.0) {
      p = 0;
    } 
    return p;
  }
  static double N597e63e940(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 1;
    } else if (i[4] <= 13809.0) {
    p = PoseDetector::N78d183e541(i);
    } else if (i[4] > 13809.0) {
      p = 0;
    } 
    return p;
  }
  static double N78d183e541(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 0;
    } else if (i[3] <= 12302.0) {
      p = 0;
    } else if (i[3] > 12302.0) {
      p = 1;
    } 
    return p;
  }
  static double N32a6d5b42(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 1;
    } else if (i[1] <= 9922.0) {
      p = 1;
    } else if (i[1] > 9922.0) {
      p = 0;
    } 
    return p;
  }
  static double N567172fc43(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 2;
    } else if (i[1] <= 9112.0) {
    p = PoseDetector::N32342aba44(i);
    } else if (i[1] > 9112.0) {
      p = 5;
    } 
    return p;
  }
  static double N32342aba44(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 4;
    } else if (i[1] <= 8343.0) {
    p = PoseDetector::N7ee1331545(i);
    } else if (i[1] > 8343.0) {
    p = PoseDetector::Nbd25a1647(i);
    } 
    return p;
  }
  static double N7ee1331545(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 4;
    } else if (i[0] <= 12895.0) {
      p = 4;
    } else if (i[0] > 12895.0) {
    p = PoseDetector::N72e0e8c646(i);
    } 
    return p;
  }
  static double N72e0e8c646(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 4;
    } else if (i[1] <= 8299.0) {
      p = 4;
    } else if (i[1] > 8299.0) {
      p = 2;
    } 
    return p;
  }
  static double Nbd25a1647(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 2;
    } else if (i[4] <= 13413.0) {
    p = PoseDetector::N1f18606a48(i);
    } else if (i[4] > 13413.0) {
    p = PoseDetector::N87ddeea50(i);
    } 
    return p;
  }
  static double N1f18606a48(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 2;
    } else if (i[3] <= 12206.0) {
    p = PoseDetector::N7961df1849(i);
    } else if (i[3] > 12206.0) {
      p = 2;
    } 
    return p;
  }
  static double N7961df1849(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 4;
    } else if (i[3] <= 12142.0) {
      p = 4;
    } else if (i[3] > 12142.0) {
      p = 2;
    } 
    return p;
  }
  static double N87ddeea50(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 4;
    } else if (i[0] <= 12962.0) {
      p = 4;
    } else if (i[0] > 12962.0) {
      p = 2;
    } 
    return p;
  }
}
;