/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

@class NSConditionLock, NSThread;

@interface AKDispatchQueue : NSObject  {
    int _kqueueFD;
    int _keventFDs[2];
    NSThread *_thread;
    union qed_queue_u { } *_queue;
    NSConditionLock *_runStateLock;
}

+ (id)currentRunLoopDispatchQueue;
+ (id)migrantDispatchQueue;
+ (id)newThreadRunLoopDispatchQueue;

- (void)start;
- (void)_afterStartedAddRunLoopSourceTo:(id)arg1;
- (void)runThreadDispatchQueue:(id)arg1;
- (void)switchToState:(id)arg1;
- (void)stop;
- (id)init;
- (void)dealloc;
- (union qed_queue_u { }*)queue;

@end