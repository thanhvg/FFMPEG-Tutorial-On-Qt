#ifndef WIDGET_H
#define WIDGET_H

#include <QLabel>
#include <QList>
#include <QVBoxLayout>
#include <QWidget>
//#include "ffmpengworker.h"
#include "../engine/ffmpegworker.h"

class Widget : public QWidget {
  Q_OBJECT

public:
  Widget(QWidget *parent = 0);
  ~Widget();

private:
  QList<QLabel *> m_labels;
  QVBoxLayout *m_layout;
};

#endif // WIDGET_H
