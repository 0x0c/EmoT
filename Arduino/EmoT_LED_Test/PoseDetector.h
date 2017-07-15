// class PoseDetector {

//   public:
//         enum Pose {
//       question,vsign,arm,standing,beer,sushi
//     };
//    static double classify(int i[5])
//      {

//     double p = -1;
//     p = PoseDetector::N139c75e935(i);
//     return p;
//   }
//   static double N139c75e935(int i[5]) {
//     double p = -1;
//     if (i[3] == 0) {
//       p = 2;
//     } else if (i[3] <= 11527.0) {
//     p = PoseDetector::N5011e0e36(i);
//     } else if (i[3] > 11527.0) {
//     p = PoseDetector::Nc5c2bb337(i);
//     } 
//     return p;
//   }
//   static double N5011e0e36(int i[5]) {
//     double p = -1;
//     if (i[3] == 0) {
//       p = 5;
//     } else if (i[3] <= 10234.0) {
//       p = 5;
//     } else if (i[3] > 10234.0) {
//       p = 2;
//     } 
//     return p;
//   }
//   static double Nc5c2bb337(int i[5]) {
//     double p = -1;
//     if (i[1] == 0) {
//       p = 3;
//     } else if (i[1] <= 8128.0) {
//     p = PoseDetector::N7738fb1b38(i);
//     } else if (i[1] > 8128.0) {
//     p = PoseDetector::N3dede6c339(i);
//     } 
//     return p;
//   }
//   static double N7738fb1b38(int i[5]) {
//     double p = -1;
//     if (i[1] == 0) {
//       p = 4;
//     } else if (i[1] <= 6684.0) {
//       p = 4;
//     } else if (i[1] > 6684.0) {
//       p = 3;
//     } 
//     return p;
//   }
//   static double N3dede6c339(int i[5]) {
//     double p = -1;
//     if (i[4] == 0) {
//       p = 1;
//     } else if (i[4] <= 11985.0) {
//     p = PoseDetector::N4dc92bf840(i);
//     } else if (i[4] > 11985.0) {
//     p = PoseDetector::N3d83b5a155(i);
//     } 
//     return p;
//   }
//   static double N4dc92bf840(int i[5]) {
//     double p = -1;
//     if (i[4] == 0) {
//       p = 1;
//     } else if (i[4] <= 11617.0) {
//       p = 1;
//     } else if (i[4] > 11617.0) {
//     p = PoseDetector::N5265cead41(i);
//     } 
//     return p;
//   }
//   static double N5265cead41(int i[5]) {
//     double p = -1;
//     if (i[1] == 0) {
//       p = 1;
//     } else if (i[1] <= 8833.0) {
//     p = PoseDetector::N19e3ea1e42(i);
//     } else if (i[1] > 8833.0) {
//     p = PoseDetector::N427fb1d345(i);
//     } 
//     return p;
//   }
//   static double N19e3ea1e42(int i[5]) {
//     double p = -1;
//     if (i[2] == 0) {
//       p = 1;
//     } else if (i[2] <= 12366.0) {
//     p = PoseDetector::N421f64d943(i);
//     } else if (i[2] > 12366.0) {
//       p = 0;
//     } 
//     return p;
//   }
//   static double N421f64d943(int i[5]) {
//     double p = -1;
//     if (i[0] == 0) {
//       p = 1;
//     } else if (i[0] <= 11174.0) {
//       p = 1;
//     } else if (i[0] > 11174.0) {
//     p = PoseDetector::N1b16047944(i);
//     } 
//     return p;
//   }
//   static double N1b16047944(int i[5]) {
//     double p = -1;
//     if (i[1] == 0) {
//       p = 1;
//     } else if (i[1] <= 8697.0) {
//       p = 1;
//     } else if (i[1] > 8697.0) {
//       p = 0;
//     } 
//     return p;
//   }
//   static double N427fb1d345(int i[5]) {
//     double p = -1;
//     if (i[0] == 0) {
//       p = 1;
//     } else if (i[0] <= 11174.0) {
//     p = PoseDetector::N4d73b5c046(i);
//     } else if (i[0] > 11174.0) {
//       p = 0;
//     } 
//     return p;
//   }
//   static double N4d73b5c046(int i[5]) {
//     double p = -1;
//     if (i[1] == 0) {
//       p = 1;
//     } else if (i[1] <= 9278.0) {
//     p = PoseDetector::N67a177f947(i);
//     } else if (i[1] > 9278.0) {
//     p = PoseDetector::N338669ac54(i);
//     } 
//     return p;
//   }
//   static double N67a177f947(int i[5]) {
//     double p = -1;
//     if (i[2] == 0) {
//       p = 1;
//     } else if (i[2] <= 12398.0) {
//     p = PoseDetector::N19cbb19648(i);
//     } else if (i[2] > 12398.0) {
//     p = PoseDetector::N5ea0f39052(i);
//     } 
//     return p;
//   }
//   static double N19cbb19648(int i[5]) {
//     double p = -1;
//     if (i[4] == 0) {
//       p = 1;
//     } else if (i[4] <= 11861.0) {
//     p = PoseDetector::Nbf7fc1549(i);
//     } else if (i[4] > 11861.0) {
//     p = PoseDetector::N45c6ccd650(i);
//     } 
//     return p;
//   }
//   static double Nbf7fc1549(int i[5]) {
//     double p = -1;
//     if (i[3] == 0) {
//       p = 1;
//     } else if (i[3] <= 13065.0) {
//       p = 1;
//     } else if (i[3] > 13065.0) {
//       p = 0;
//     } 
//     return p;
//   }
//   static double N45c6ccd650(int i[5]) {
//     double p = -1;
//     if (i[0] == 0) {
//       p = 1;
//     } else if (i[0] <= 11059.0) {
//       p = 1;
//     } else if (i[0] > 11059.0) {
//     p = PoseDetector::N7eb2196351(i);
//     } 
//     return p;
//   }
//   static double N7eb2196351(int i[5]) {
//     double p = -1;
//     if (i[3] == 0) {
//       p = 1;
//     } else if (i[3] <= 12561.0) {
//       p = 1;
//     } else if (i[3] > 12561.0) {
//       p = 0;
//     } 
//     return p;
//   }
//   static double N5ea0f39052(int i[5]) {
//     double p = -1;
//     if (i[3] == 0) {
//       p = 1;
//     } else if (i[3] <= 12463.0) {
//       p = 1;
//     } else if (i[3] > 12463.0) {
//     p = PoseDetector::N18d6a37953(i);
//     } 
//     return p;
//   }
//   static double N18d6a37953(int i[5]) {
//     double p = -1;
//     if (i[3] == 0) {
//       p = 0;
//     } else if (i[3] <= 12962.0) {
//       p = 0;
//     } else if (i[3] > 12962.0) {
//       p = 1;
//     } 
//     return p;
//   }
//   static double N338669ac54(int i[5]) {
//     double p = -1;
//     if (i[4] == 0) {
//       p = 1;
//     } else if (i[4] <= 11648.0) {
//       p = 1;
//     } else if (i[4] > 11648.0) {
//       p = 0;
//     } 
//     return p;
//   }
//   static double N3d83b5a155(int i[5]) {
//     double p = -1;
//     if (i[1] == 0) {
//       p = 1;
//     } else if (i[1] <= 8629.0) {
//       p = 1;
//     } else if (i[1] > 8629.0) {
//       p = 0;
//     } 
//     return p;
//   }
// };

class PoseDetector {

  public:
  enum Pose {
      question,vsign,arm,standing,beer,sushi
    };
     static double classify(int i[5])
    {

    double p = -1;
    p = PoseDetector::N1cfe168477(i);
    return p;
  }
  static double N1cfe168477(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 2;
    } else if (i[1] <= 8128.0) {
    p = PoseDetector::N6d7842fa78(i);
    } else if (i[1] > 8128.0) {
    p = PoseDetector::N78c5f13180(i);
    } 
    return p;
  }
  static double N6d7842fa78(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 4;
    } else if (i[1] <= 6684.0) {
      p = 4;
    } else if (i[1] > 6684.0) {
    p = PoseDetector::N7275633b79(i);
    } 
    return p;
  }
  static double N7275633b79(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 3;
    } else if (i[0] <= 11861.0) {
      p = 3;
    } else if (i[0] > 11861.0) {
      p = 2;
    } 
    return p;
  }
  static double N78c5f13180(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 0;
    } else if (i[0] <= 12142.0) {
    p = PoseDetector::Nb5e05e981(i);
    } else if (i[0] > 12142.0) {
      p = 5;
    } 
    return p;
  }
  static double Nb5e05e981(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 1;
    } else if (i[4] <= 11985.0) {
    p = PoseDetector::N49d609d382(i);
    } else if (i[4] > 11985.0) {
    p = PoseDetector::N16f3233597(i);
    } 
    return p;
  }
  static double N49d609d382(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 1;
    } else if (i[4] <= 11617.0) {
      p = 1;
    } else if (i[4] > 11617.0) {
    p = PoseDetector::N31f218483(i);
    } 
    return p;
  }
  static double N31f218483(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 1;
    } else if (i[1] <= 8833.0) {
    p = PoseDetector::N70d162b584(i);
    } else if (i[1] > 8833.0) {
    p = PoseDetector::N1470352987(i);
    } 
    return p;
  }
  static double N70d162b584(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 1;
    } else if (i[2] <= 12366.0) {
    p = PoseDetector::N42a792f085(i);
    } else if (i[2] > 12366.0) {
      p = 0;
    } 
    return p;
  }
  static double N42a792f085(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 1;
    } else if (i[0] <= 11174.0) {
      p = 1;
    } else if (i[0] > 11174.0) {
    p = PoseDetector::N79fecc086(i);
    } 
    return p;
  }
  static double N79fecc086(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 1;
    } else if (i[1] <= 8697.0) {
      p = 1;
    } else if (i[1] > 8697.0) {
      p = 0;
    } 
    return p;
  }
  static double N1470352987(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 1;
    } else if (i[0] <= 11174.0) {
    p = PoseDetector::N52b2213a88(i);
    } else if (i[0] > 11174.0) {
      p = 0;
    } 
    return p;
  }
  static double N52b2213a88(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 1;
    } else if (i[1] <= 9278.0) {
    p = PoseDetector::N2ca3914089(i);
    } else if (i[1] > 9278.0) {
    p = PoseDetector::N3ceda90396(i);
    } 
    return p;
  }
  static double N2ca3914089(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 1;
    } else if (i[2] <= 12398.0) {
    p = PoseDetector::N269517a590(i);
    } else if (i[2] > 12398.0) {
    p = PoseDetector::N7cecbe4694(i);
    } 
    return p;
  }
  static double N269517a590(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 1;
    } else if (i[4] <= 11861.0) {
    p = PoseDetector::N643656d91(i);
    } else if (i[4] > 11861.0) {
    p = PoseDetector::N32b7da5192(i);
    } 
    return p;
  }
  static double N643656d91(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 1;
    } else if (i[3] <= 13065.0) {
      p = 1;
    } else if (i[3] > 13065.0) {
      p = 0;
    } 
    return p;
  }
  static double N32b7da5192(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 1;
    } else if (i[0] <= 11059.0) {
      p = 1;
    } else if (i[0] > 11059.0) {
    p = PoseDetector::N445e15da93(i);
    } 
    return p;
  }
  static double N445e15da93(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 1;
    } else if (i[3] <= 12561.0) {
      p = 1;
    } else if (i[3] > 12561.0) {
      p = 0;
    } 
    return p;
  }
  static double N7cecbe4694(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 1;
    } else if (i[3] <= 12463.0) {
      p = 1;
    } else if (i[3] > 12463.0) {
    p = PoseDetector::N1ac025bd95(i);
    } 
    return p;
  }
  static double N1ac025bd95(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 0;
    } else if (i[3] <= 12962.0) {
      p = 0;
    } else if (i[3] > 12962.0) {
      p = 1;
    } 
    return p;
  }
  static double N3ceda90396(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 1;
    } else if (i[4] <= 11648.0) {
      p = 1;
    } else if (i[4] > 11648.0) {
      p = 0;
    } 
    return p;
  }
  static double N16f3233597(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 1;
    } else if (i[1] <= 8629.0) {
      p = 1;
    } else if (i[1] > 8629.0) {
      p = 0;
    } 
    return p;
  }
};

