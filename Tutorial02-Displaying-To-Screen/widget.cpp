#include "widget.h"

Widget::Widget(QWidget *parent) : QWidget(parent) {
  m_label = new QLabel(this);
  m_layout = new QVBoxLayout(this);
  m_layout->addWidget(m_label);
  setLayout(m_layout);
  m_ffmpegWorker = new FFmpengWorker;
  connect(FFmpengWorker::instance(), SIGNAL(displayScreenUpdate(QImage)), this,
          SLOT(onUpdateScreen(QImage)));
  connect(FFmpengWorker::instance(), SIGNAL(displayFinished()), this,
          SLOT(onDisplayFinished()));
  FFmpengWorker::instance()->displayToScreen("/home/tommego/a.mp4");
}

Widget::~Widget() {}
void Widget::onUpdateScreen(QImage img) {
  m_label->setPixmap(QPixmap::fromImage(img));
}
void Widget::onDisplayFinished() { qApp->quit(); }
