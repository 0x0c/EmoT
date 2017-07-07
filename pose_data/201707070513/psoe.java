class PoseDetector {

  public: static double classify(int i[5])
 {
enum Pose {
      question,vsign,arm,standing,beer,sushi
    };
    double p = -1;
    p = PoseDetector::N2d974f4950(i);
    return p;
  }
  static double N2d974f4950(int i[5]) {
    double p = -1;
    if (i[0] == null) {
      p = 0;
    } else if (i[0] <= 10448.0) {
    p = PoseDetector::N28d6590151(i);
    } else if (i[0] > 10448.0) {
    p = PoseDetector::N7f0091ca67(i);
    } 
    return p;
  }
  static double N28d6590151(int i[5]) {
    double p = -1;
    if (i[1] == null) {
      p = 1;
    } else if (i[1] <= 8607.0) {
    p = PoseDetector::N106d659952(i);
    } else if (i[1] > 8607.0) {
    p = PoseDetector::N7d33dbab65(i);
    } 
    return p;
  }
  static double N106d659952(int i[5]) {
    double p = -1;
    if (i[1] == null) {
      p = 3;
    } else if (i[1] <= 7553.0) {
    p = PoseDetector::N7e29283b53(i);
    } else if (i[1] > 7553.0) {
    p = PoseDetector::N43ac640d61(i);
    } 
    return p;
  }
  static double N7e29283b53(int i[5]) {
    double p = -1;
    if (i[1] == null) {
      p = 3;
    } else if (i[1] <= 7454.0) {
    p = PoseDetector::N40107a3254(i);
    } else if (i[1] > 7454.0) {
    p = PoseDetector::N596ba56456(i);
    } 
    return p;
  }
  static double N40107a3254(int i[5]) {
    double p = -1;
    if (i[2] == null) {
      p = 3;
    } else if (i[2] <= 11438.0) {
      p = 3;
    } else if (i[2] > 11438.0) {
    p = PoseDetector::N79c6897955(i);
    } 
    return p;
  }
  static double N79c6897955(int i[5]) {
    double p = -1;
    if (i[2] == null) {
      p = 3;
    } else if (i[2] <= 12142.0) {
      p = 3;
    } else if (i[2] > 12142.0) {
      p = 4;
    } 
    return p;
  }
  static double N596ba56456(int i[5]) {
    double p = -1;
    if (i[0] == null) {
      p = 3;
    } else if (i[0] <= 9974.0) {
    p = PoseDetector::N2a37761957(i);
    } else if (i[0] > 9974.0) {
      p = 3;
    } 
    return p;
  }
  static double N2a37761957(int i[5]) {
    double p = -1;
    if (i[2] == null) {
      p = 3;
    } else if (i[2] <= 10945.0) {
    p = PoseDetector::N1f2a78f658(i);
    } else if (i[2] > 10945.0) {
      p = 1;
    } 
    return p;
  }
  static double N1f2a78f658(int i[5]) {
    double p = -1;
    if (i[4] == null) {
      p = 3;
    } else if (i[4] <= 10584.0) {
      p = 3;
    } else if (i[4] > 10584.0) {
    p = PoseDetector::N1d6b6e7659(i);
    } 
    return p;
  }
  static double N1d6b6e7659(int i[5]) {
    double p = -1;
    if (i[0] == null) {
      p = 3;
    } else if (i[0] <= 9795.0) {
      p = 3;
    } else if (i[0] > 9795.0) {
    p = PoseDetector::N7821141060(i);
    } 
    return p;
  }
  static double N7821141060(int i[5]) {
    double p = -1;
    if (i[4] == null) {
      p = 1;
    } else if (i[4] <= 10861.0) {
      p = 1;
    } else if (i[4] > 10861.0) {
      p = 3;
    } 
    return p;
  }
  static double N43ac640d61(int i[5]) {
    double p = -1;
    if (i[4] == null) {
      p = 3;
    } else if (i[4] <= 10314.0) {
    p = PoseDetector::N6adcb43062(i);
    } else if (i[4] > 10314.0) {
    p = PoseDetector::N3fb9f21f63(i);
    } 
    return p;
  }
  static double N6adcb43062(int i[5]) {
    double p = -1;
    if (i[1] == null) {
      p = 3;
    } else if (i[1] <= 7714.0) {
      p = 3;
    } else if (i[1] > 7714.0) {
      p = 1;
    } 
    return p;
  }
  static double N3fb9f21f63(int i[5]) {
    double p = -1;
    if (i[0] == null) {
      p = 1;
    } else if (i[0] <= 10051.0) {
      p = 1;
    } else if (i[0] > 10051.0) {
    p = PoseDetector::N48c6f1e864(i);
    } 
    return p;
  }
  static double N48c6f1e864(int i[5]) {
    double p = -1;
    if (i[1] == null) {
      p = 3;
    } else if (i[1] <= 7795.0) {
      p = 3;
    } else if (i[1] > 7795.0) {
      p = 1;
    } 
    return p;
  }
  static double N7d33dbab65(int i[5]) {
    double p = -1;
    if (i[1] == null) {
      p = 0;
    } else if (i[1] <= 8719.0) {
    p = PoseDetector::N579af7c466(i);
    } else if (i[1] > 8719.0) {
      p = 0;
    } 
    return p;
  }
  static double N579af7c466(int i[5]) {
    double p = -1;
    if (i[3] == null) {
      p = 0;
    } else if (i[3] <= 10805.0) {
      p = 0;
    } else if (i[3] > 10805.0) {
      p = 1;
    } 
    return p;
  }
  static double N7f0091ca67(int i[5]) {
    double p = -1;
    if (i[1] == null) {
      p = 2;
    } else if (i[1] <= 7919.0) {
    p = PoseDetector::N7e63a5e968(i);
    } else if (i[1] > 7919.0) {
      p = 5;
    } 
    return p;
  }
  static double N7e63a5e968(int i[5]) {
    double p = -1;
    if (i[4] == null) {
      p = 2;
    } else if (i[4] <= 11117.0) {
    p = PoseDetector::N4021a4d269(i);
    } else if (i[4] > 11117.0) {
    p = PoseDetector::N6eff481371(i);
    } 
    return p;
  }
  static double N4021a4d269(int i[5]) {
    double p = -1;
    if (i[2] == null) {
      p = 2;
    } else if (i[2] <= 11232.0) {
    p = PoseDetector::N60cbf7e270(i);
    } else if (i[2] > 11232.0) {
      p = 2;
    } 
    return p;
  }
  static double N60cbf7e270(int i[5]) {
    double p = -1;
    if (i[2] == null) {
      p = 3;
    } else if (i[2] <= 11059.0) {
      p = 3;
    } else if (i[2] > 11059.0) {
      p = 2;
    } 
    return p;
  }
  static double N6eff481371(int i[5]) {
    double p = -1;
    if (i[2] == null) {
      p = 2;
    } else if (i[2] <= 12017.0) {
    p = PoseDetector::N39d5105372(i);
    } else if (i[2] > 12017.0) {
      p = 4;
    } 
    return p;
  }
  static double N39d5105372(int i[5]) {
    double p = -1;
    if (i[2] == null) {
      p = 2;
    } else if (i[2] <= 11923.0) {
      p = 2;
    } else if (i[2] > 11923.0) {
      p = 4;
    } 
    return p;
  }
}

