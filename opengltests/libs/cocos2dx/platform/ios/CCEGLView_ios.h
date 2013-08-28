/****************************************************************************
Copyright (c) 2010 cocos2d-x.org

http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#ifndef __CC_EGLVIEW_IPHONE_H__
#define __CC_EGLVIEW_IPHONE_H__

#include "CCCommon.h"

namespace   cocos2d {
class CCSet;
class CCTouch;
class EGLTouchDelegate;
class CCSize;

class CC_DLL CCEGLView
{
public:
    CCEGLView();
   ~CCEGLView();

    CCSize  getSize();
    bool    isOpenGLReady();
    bool    canSetContentScaleFactor();
    bool    isIpad();
    void    setContentScaleFactor(float contentScaleFactor);
    
    // keep compatible
    void    release();
    void    setTouchDelegate(EGLTouchDelegate * pDelegate);
    void    swapBuffers();
    void    setViewPortInPoints(float x, float y, float w, float h);
    void    setScissorInPoints(float x, float y, float w, float h);

    void touchesBegan(CCSet *set);
    void touchesMoved(CCSet *set);
    void touchesEnded(CCSet *set);
    void touchesCancelled(CCSet *set);
    
    float getMainScreenScale();
    
    void setIMEKeyboardState(bool bOpen);
    
    static CCEGLView& sharedOpenGLView();
        
private:
    EGLTouchDelegate *m_pDelegate;
};

}   // end of namespace   cocos2d

#endif	// end of __CC_EGLVIEW_IPHONE_H__
