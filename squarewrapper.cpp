#include "squarewrapper.h"

SquareWrapper::SquareWrapper(QWidget *parent) : QWidget(parent), m_widget(nullptr)
{

}


void SquareWrapper::resizeEvent (QResizeEvent *event)
{
    QWidget::resizeEvent(event);
    fixup();
}
