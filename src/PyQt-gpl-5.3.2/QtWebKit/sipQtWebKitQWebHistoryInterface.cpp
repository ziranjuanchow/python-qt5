/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:20 2014
 *
 * Copyright (c) 2014 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtWebKit.h"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWebKit/qwebhistoryinterface.sip"
#include <qwebhistoryinterface.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 231 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 219 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 54 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"


class sipQWebHistoryInterface : public QWebHistoryInterface
{
public:
    sipQWebHistoryInterface(QObject*);
    virtual ~sipQWebHistoryInterface();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    QObject* sipProtect_sender() const;
    int sipProtect_receivers(const char*) const;
    void sipProtectVirt_timerEvent(bool,QTimerEvent*);
    void sipProtectVirt_childEvent(bool,QChildEvent*);
    void sipProtectVirt_customEvent(bool,QEvent*);
    void sipProtectVirt_connectNotify(bool,const QMetaMethod&);
    void sipProtectVirt_disconnectNotify(bool,const QMetaMethod&);
    int sipProtect_senderSignalIndex() const;
    bool sipProtect_isSignalConnected(const QMetaMethod&) const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const QMetaMethod&);
    void connectNotify(const QMetaMethod&);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);
    void addHistoryEntry(const QString&);
    bool historyContains(const QString&) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQWebHistoryInterface(const sipQWebHistoryInterface &);
    sipQWebHistoryInterface &operator = (const sipQWebHistoryInterface &);

    char sipPyMethods[9];
};

sipQWebHistoryInterface::sipQWebHistoryInterface(QObject*a0): QWebHistoryInterface(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQWebHistoryInterface::~sipQWebHistoryInterface()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQWebHistoryInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtWebKit_qt_metaobject(sipPySelf,sipType_QWebHistoryInterface);
}

int sipQWebHistoryInterface::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QWebHistoryInterface::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtWebKit_qt_metacall(sipPySelf,sipType_QWebHistoryInterface,_c,_id,_a);

    return _id;
}

void *sipQWebHistoryInterface::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtWebKit_qt_metacast(sipPySelf, sipType_QWebHistoryInterface, _clname, &sipCpp) ? sipCpp : QWebHistoryInterface::qt_metacast(_clname));
}

void sipQWebHistoryInterface::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QWebHistoryInterface::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtWebKit_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQWebHistoryInterface::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QWebHistoryInterface::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtWebKit_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQWebHistoryInterface::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QWebHistoryInterface::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtWebKit_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQWebHistoryInterface::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QWebHistoryInterface::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtWebKit_QtCore->em_virthandlers[47]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQWebHistoryInterface::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QWebHistoryInterface::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtWebKit_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQWebHistoryInterface::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QWebHistoryInterface::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtWebKit_QtCore->em_virthandlers[26]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQWebHistoryInterface::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QWebHistoryInterface::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtWebKit_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQWebHistoryInterface::addHistoryEntry(const QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,sipName_QWebHistoryInterface,sipName_addHistoryEntry);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtGui_22)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&);

    ((sipVH_QtGui_22)(sipModuleAPI_QtWebKit_QtGui->em_virthandlers[22]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQWebHistoryInterface::historyContains(const QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QWebHistoryInterface,sipName_historyContains);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_49)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&);

    return ((sipVH_QtCore_49)(sipModuleAPI_QtWebKit_QtCore->em_virthandlers[49]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QObject* sipQWebHistoryInterface::sipProtect_sender() const
{
    return QObject::sender();
}

int sipQWebHistoryInterface::sipProtect_receivers(const char*a0) const
{
    return QObject::receivers(a0);
}

void sipQWebHistoryInterface::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent*a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQWebHistoryInterface::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent*a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQWebHistoryInterface::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent*a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQWebHistoryInterface::sipProtectVirt_connectNotify(bool sipSelfWasArg,const QMetaMethod& a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQWebHistoryInterface::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const QMetaMethod& a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

int sipQWebHistoryInterface::sipProtect_senderSignalIndex() const
{
    return QObject::senderSignalIndex();
}

bool sipQWebHistoryInterface::sipProtect_isSignalConnected(const QMetaMethod& a0) const
{
    return QObject::isSignalConnected(a0);
}


PyDoc_STRVAR(doc_QWebHistoryInterface_sender, "QWebHistoryInterface.sender() -> QObject");

extern "C" {static PyObject *meth_QWebHistoryInterface_sender(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryInterface_sender(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQWebHistoryInterface *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QWebHistoryInterface, &sipCpp))
        {
            QObject*sipRes = 0;

#line 540 "sip/QtCore/qobject.sip"
        // sender() must be called without the GIL to avoid possible deadlocks between
        // the GIL and Qt's internal thread data mutex.
        
        Py_BEGIN_ALLOW_THREADS
        
        #if defined(SIP_PROTECTED_IS_PUBLIC)
        sipRes = sipCpp->sender();
        #else
        sipRes = sipCpp->sipProtect_sender();
        #endif
        
        Py_END_ALLOW_THREADS
        
        if (!sipRes)
        {
            typedef QObject *(*qtcore_qobject_sender_t)();
        
            static qtcore_qobject_sender_t qtcore_qobject_sender = 0;
        
            if (!qtcore_qobject_sender)
                qtcore_qobject_sender = (qtcore_qobject_sender_t)sipImportSymbol("qtcore_qobject_sender");
        
            if (qtcore_qobject_sender)
                sipRes = qtcore_qobject_sender();
        }
#line 398 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryInterface, sipName_sender, doc_QWebHistoryInterface_sender);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryInterface_receivers, "QWebHistoryInterface.receivers(signal) -> int");

extern "C" {static PyObject *meth_QWebHistoryInterface_receivers(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryInterface_receivers(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        const sipQWebHistoryInterface *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BP0", &sipSelf, sipType_QWebHistoryInterface, &sipCpp, &a0))
        {
            int sipRes = 0;
            sipErrorState sipError = sipErrorNone;

#line 569 "sip/QtCore/qobject.sip"
        // We need to handle the signal object.  Import the helper if it hasn't already
        // been done.
        typedef sipErrorState (*pyqt5_get_signal_signature_t)(PyObject *, const QObject *, const QByteArray &);
        
        static pyqt5_get_signal_signature_t pyqt5_get_signal_signature = 0;
        
        if (!pyqt5_get_signal_signature)
            pyqt5_get_signal_signature = (pyqt5_get_signal_signature_t)sipImportSymbol("pyqt5_get_signal_signature");
        
        if (pyqt5_get_signal_signature)
        {
            QByteArray signal_signature;
            
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            if ((sipError = pyqt5_get_signal_signature(a0, sipCpp, signal_signature)) == sipErrorNone)
            {
                sipRes = sipCpp->receivers(signal_signature.constData());
            }
        #else
            if ((sipError = pyqt5_get_signal_signature(a0, static_cast<const QObject *>(sipCpp), signal_signature)) == sipErrorNone)
            {
                sipRes = sipCpp->sipProtect_receivers(signal_signature.constData());
            }
        #endif
            else if (sipError == sipErrorContinue)
            {
                sipError = sipBadCallableArg(0, a0);
            }
        }
#line 457 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebHistoryInterface.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return SIPLong_FromLong(sipRes);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryInterface, sipName_receivers, doc_QWebHistoryInterface_receivers);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryInterface_timerEvent, "QWebHistoryInterface.timerEvent(QTimerEvent)");

extern "C" {static PyObject *meth_QWebHistoryInterface_timerEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryInterface_timerEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent* a0;
        sipQWebHistoryInterface *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QWebHistoryInterface, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryInterface, sipName_timerEvent, doc_QWebHistoryInterface_timerEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryInterface_childEvent, "QWebHistoryInterface.childEvent(QChildEvent)");

extern "C" {static PyObject *meth_QWebHistoryInterface_childEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryInterface_childEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent* a0;
        sipQWebHistoryInterface *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QWebHistoryInterface, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryInterface, sipName_childEvent, doc_QWebHistoryInterface_childEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryInterface_customEvent, "QWebHistoryInterface.customEvent(QEvent)");

extern "C" {static PyObject *meth_QWebHistoryInterface_customEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryInterface_customEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent* a0;
        sipQWebHistoryInterface *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QWebHistoryInterface, &sipCpp, sipType_QEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryInterface, sipName_customEvent, doc_QWebHistoryInterface_customEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryInterface_connectNotify, "QWebHistoryInterface.connectNotify(QMetaMethod)");

extern "C" {static PyObject *meth_QWebHistoryInterface_connectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryInterface_connectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QMetaMethod* a0;
        sipQWebHistoryInterface *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QWebHistoryInterface, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryInterface, sipName_connectNotify, doc_QWebHistoryInterface_connectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryInterface_disconnectNotify, "QWebHistoryInterface.disconnectNotify(QMetaMethod)");

extern "C" {static PyObject *meth_QWebHistoryInterface_disconnectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryInterface_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QMetaMethod* a0;
        sipQWebHistoryInterface *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QWebHistoryInterface, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryInterface, sipName_disconnectNotify, doc_QWebHistoryInterface_disconnectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryInterface_senderSignalIndex, "QWebHistoryInterface.senderSignalIndex() -> int");

extern "C" {static PyObject *meth_QWebHistoryInterface_senderSignalIndex(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryInterface_senderSignalIndex(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQWebHistoryInterface *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QWebHistoryInterface, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sipProtect_senderSignalIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryInterface, sipName_senderSignalIndex, doc_QWebHistoryInterface_senderSignalIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryInterface_isSignalConnected, "QWebHistoryInterface.isSignalConnected(QMetaMethod) -> bool");

extern "C" {static PyObject *meth_QWebHistoryInterface_isSignalConnected(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryInterface_isSignalConnected(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod* a0;
        const sipQWebHistoryInterface *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QWebHistoryInterface, &sipCpp, sipType_QMetaMethod, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->sipProtect_isSignalConnected(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryInterface, sipName_isSignalConnected, doc_QWebHistoryInterface_isSignalConnected);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryInterface_setDefaultInterface, "QWebHistoryInterface.setDefaultInterface(QWebHistoryInterface)");

extern "C" {static PyObject *meth_QWebHistoryInterface_setDefaultInterface(PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryInterface_setDefaultInterface(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistoryInterface* a0;
        PyObject *a0Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "@J8", &a0Keep, sipType_QWebHistoryInterface, &a0))
        {
            QWebHistoryInterface::setDefaultInterface(a0);

            sipKeepReference(NULL, -2, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryInterface, sipName_setDefaultInterface, doc_QWebHistoryInterface_setDefaultInterface);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryInterface_defaultInterface, "QWebHistoryInterface.defaultInterface() -> QWebHistoryInterface");

extern "C" {static PyObject *meth_QWebHistoryInterface_defaultInterface(PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryInterface_defaultInterface(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QWebHistoryInterface*sipRes;

            sipRes = QWebHistoryInterface::defaultInterface();

            return sipConvertFromType(sipRes,sipType_QWebHistoryInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryInterface, sipName_defaultInterface, doc_QWebHistoryInterface_defaultInterface);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryInterface_historyContains, "QWebHistoryInterface.historyContains(str) -> bool");

extern "C" {static PyObject *meth_QWebHistoryInterface_historyContains(PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryInterface_historyContains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        const QWebHistoryInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QWebHistoryInterface, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QWebHistoryInterface, sipName_historyContains);
                return NULL;
            }

            sipRes = sipCpp->historyContains(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryInterface, sipName_historyContains, doc_QWebHistoryInterface_historyContains);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryInterface_addHistoryEntry, "QWebHistoryInterface.addHistoryEntry(str)");

extern "C" {static PyObject *meth_QWebHistoryInterface_addHistoryEntry(PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryInterface_addHistoryEntry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        QWebHistoryInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QWebHistoryInterface, &sipCpp, sipType_QString,&a0, &a0State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QWebHistoryInterface, sipName_addHistoryEntry);
                return NULL;
            }

            sipCpp->addHistoryEntry(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryInterface, sipName_addHistoryEntry, doc_QWebHistoryInterface_addHistoryEntry);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebHistoryInterface(void *, const sipTypeDef *);}
static void *cast_QWebHistoryInterface(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QWebHistoryInterface)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QWebHistoryInterface *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebHistoryInterface(void *, int);}
static void release_QWebHistoryInterface(void *sipCppV,int)
{
    QWebHistoryInterface *sipCpp = reinterpret_cast<QWebHistoryInterface *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QWebHistoryInterface(sipSimpleWrapper *);}
static void dealloc_QWebHistoryInterface(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQWebHistoryInterface *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QWebHistoryInterface(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QWebHistoryInterface(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebHistoryInterface(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQWebHistoryInterface *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQWebHistoryInterface(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QWebHistoryInterface[] = {{160, 0, 1}};


static PyMethodDef methods_QWebHistoryInterface[] = {
    {SIP_MLNAME_CAST(sipName_addHistoryEntry), meth_QWebHistoryInterface_addHistoryEntry, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistoryInterface_addHistoryEntry)},
    {SIP_MLNAME_CAST(sipName_childEvent), (PyCFunction)meth_QWebHistoryInterface_childEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), (PyCFunction)meth_QWebHistoryInterface_connectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), (PyCFunction)meth_QWebHistoryInterface_customEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_defaultInterface), meth_QWebHistoryInterface_defaultInterface, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistoryInterface_defaultInterface)},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), (PyCFunction)meth_QWebHistoryInterface_disconnectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_historyContains), meth_QWebHistoryInterface_historyContains, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistoryInterface_historyContains)},
    {SIP_MLNAME_CAST(sipName_isSignalConnected), (PyCFunction)meth_QWebHistoryInterface_isSignalConnected, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), (PyCFunction)meth_QWebHistoryInterface_receivers, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_sender), (PyCFunction)meth_QWebHistoryInterface_sender, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_senderSignalIndex), (PyCFunction)meth_QWebHistoryInterface_senderSignalIndex, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_setDefaultInterface), meth_QWebHistoryInterface_setDefaultInterface, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistoryInterface_setDefaultInterface)},
    {SIP_MLNAME_CAST(sipName_timerEvent), (PyCFunction)meth_QWebHistoryInterface_timerEvent, METH_VARARGS|METH_KEYWORDS, NULL}
};

PyDoc_STRVAR(doc_QWebHistoryInterface, "\1QWebHistoryInterface(QObject parent=None)");


pyqt5ClassTypeDef sipTypeDef_QtWebKit_QWebHistoryInterface = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QWebHistoryInterface,
        {0}
    },
    {
        sipNameNr_QWebHistoryInterface,
        {0, 0, 1},
        13, methods_QWebHistoryInterface,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebHistoryInterface,
    -1,
    -1,
    supers_QWebHistoryInterface,
    0,
    init_type_QWebHistoryInterface,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QWebHistoryInterface,
    0,
    0,
    0,
    release_QWebHistoryInterface,
    cast_QWebHistoryInterface,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QWebHistoryInterface::staticMetaObject,
    0,
    0,
    0
};