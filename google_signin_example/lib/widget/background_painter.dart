import 'dart:ui';

import 'package:flutter/material.dart';

class BackgroundPainter extends CustomPainter {
  final Paint bluePaint;
  final Paint greyPaint;
  final Paint orangePaint;

  BackgroundPainter()
      : bluePaint = Paint()
          ..color = Colors.lightBlue.shade300
          ..style = PaintingStyle.fill,
        greyPaint = Paint()
          ..color = Colors.blueAccent
          ..style = PaintingStyle.fill,
        orangePaint = Paint()
          ..color = Colors.orange.shade400
          ..style = PaintingStyle.fill;
    

  @override
  void paint(Canvas canvas, Size size) {
    paintBlue(size, canvas);
    paintOrange(size, canvas);
    paintGrey(size, canvas);
  }

  void paintBlue(Size size, Canvas canvas) {
    final path = Path();

    path.moveTo(size.width, 0);
    path.lineTo(0, 0);

    path.quadraticBezierTo(
      size.width * 0.35,
      size.height * 0.35,
      size.width,
      size.height * 0.55,
    );
    canvas.drawPath(path, bluePaint);
  }

    void paintOrange(Size size, Canvas canvas) {
    final path = Path();

    path.moveTo(size.width, 0);
    path.lineTo(0, 0);

    path.quadraticBezierTo(
      size.width * 1.35,
      size.height * 0.35,
      size.width,
      size.height * 0.55,
    );
    canvas.drawPath(path, orangePaint);
  }
  void paintGrey(Size size, Canvas canvas) {
    final path = Path();

    path.moveTo(size.width, 0);
    path.lineTo(0, 0);

    path.quadraticBezierTo(
      size.width * 0.65,
      size.height * .5,
      size.width * 0.10 ,
      size.height ,
    );
    
    canvas.drawPath(path, greyPaint);
  }

  @override
  bool shouldRepaint(covariant CustomPainter oldDelegate) {
    // TODO: implement shouldRepaint
    throw UnimplementedError();
  }
}
