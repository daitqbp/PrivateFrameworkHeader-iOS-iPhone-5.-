/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIView<PLDraggingDestination>, UIPasteboard;

@interface PLDragGestureRecognizer : UILongPressGestureRecognizer  {
    UIView<PLDraggingDestination> *_destinationView;
    UIPasteboard *_draggingPasteboard;
    struct { 
        unsigned int respondsToDraggingEntered : 1; 
        unsigned int respondsToDraggingUpdated : 1; 
        unsigned int respondsToDraggingExited : 1; 
        unsigned int respondsToDraggingEnded : 1; 
        unsigned int canDrop : 1; 
    } _flags;
    int draggingSourceOperationMask;
}

@property(retain) UIView<PLDraggingDestination> * destinationView;
@property(readonly) UIPasteboard * draggingPasteboard;
@property int draggingSourceOperationMask;


- (void)reset;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setDraggingSourceOperationMask:(int)arg1;
- (int)draggingSourceOperationMask;
- (id)draggingPasteboard;
- (id)_touchedView;
- (id)destinationView;
- (void)setDestinationView:(id)arg1;
- (void)dealloc;

@end
