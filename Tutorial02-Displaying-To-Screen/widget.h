#ifndef WIDGET_H
#define WIDGET_H

#include "../engine/ffmpegworker.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>
#include <QtConcurrent>

class Widget : public QWidget {
  Q_OBJECT

public:
  Widget(QWidget *parent = 0);
  ~Widget();
  QLabel *m_label;
  QVBoxLayout *m_layout;
  FFmpengWorker *m_ffmpegWorker;

public slots:
  void onUpdateScreen(QImage img);
  void onDisplayFinished();

private:
};

#endif // WIDGET_H
