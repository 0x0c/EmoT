class PoseDetector {

  public:
    enum Pose {
      question,vsign,arm,standing,beer
    };
    double detect(int i[5])
    {

    double p = -1;
    p = PoseDetector::N7968afc520(i);
    return p;
  }
  static double N7968afc520(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 1;
    } else if (i[3] <= 11587.0) {
    p = PoseDetector::N47ebecc821(i);
    } else if (i[3] > 11587.0) {
    p = PoseDetector::N1462c20927(i);
    } 
    return p;
  }
  static double N47ebecc821(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 1;
    } else if (i[3] <= 10287.0) {
    p = PoseDetector::N5206635b22(i);
    } else if (i[3] > 10287.0) {
    p = PoseDetector::N3632da8d25(i);
    } 
    return p;
  }
  static double N5206635b22(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 3;
    } else if (i[0] <= 10025.0) {
      p = 3;
    } else if (i[0] > 10025.0) {
    p = PoseDetector::N2165156f23(i);
    } 
    return p;
  }
  static double N2165156f23(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 1;
    } else if (i[0] <= 6315.0) {
      p = 1;
    } else if (i[0] > 6315.0) {
    p = PoseDetector::N73623b8924(i);
    } 
    return p;
  }
  static double N73623b8924(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 3;
    } else if (i[3] <= 9695.0) {
      p = 3;
    } else if (i[3] > 9695.0) {
      p = 1;
    } 
    return p;
  }
  static double N3632da8d25(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 4;
    } else if (i[3] <= 9620.0) {
    p = PoseDetector::N44aa7ac726(i);
    } else if (i[3] > 9620.0) {
      p = 4;
    } 
    return p;
  }
  static double N44aa7ac726(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 3;
    } else if (i[3] <= 9521.0) {
      p = 3;
    } else if (i[3] > 9521.0) {
      p = 4;
    } 
    return p;
  }
  static double N1462c20927(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 0;
    } else if (i[0] <= 9230.0) {
      p = 0;
    } else if (i[0] > 9230.0) {
    p = PoseDetector::N5fb0e75328(i);
    } 
    return p;
  }
  static double N5fb0e75328(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 2;
    } else if (i[0] <= 9770.0) {
      p = 2;
    } else if (i[0] > 9770.0) {
    p = PoseDetector::N57232b3929(i);
    } 
    return p;
  }
  static double N57232b3929(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 4;
    } else if (i[0] <= 6281.0) {
      p = 4;
    } else if (i[0] > 6281.0) {
      p = 2;
    } 
    return p;
  }
};

