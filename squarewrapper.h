#ifndef SQUAREWRAPPER_H
#define SQUAREWRAPPER_H


#include <QWidget>

class SquareWrapper : public QWidget
{
  // Q_OBJECT

public:
    explicit SquareWrapper(QWidget *parent = nullptr);

    virtual QSize sizeHint () const override
    {
            return(m_widget ? m_widget->sizeHint() : QWidget::sizeHint());
    }

    virtual void setWidget(QWidget *widget){
        if ((m_widget = widget))
                m_widget->setParent(this);
        this->setMinimumSize(m_widget->minimumSize());
    }

signals:

public slots:

protected:

    virtual void resizeEvent(QResizeEvent* event) override;

private:
    void fixup ()
    {
        int side = std::min(height(), width());
        if (m_widget) {
            QRect r(QPoint(), QSize(side, side));

//            r.moveCenter(rect().center());
            r.moveTopLeft(rect().topLeft());

            m_widget->setGeometry(r);
        }
    }

    QWidget *m_widget;
};

#endif // SQUAREWRAPPER_H
