/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@class SCROConnection, SCRCTargetSelectorTimer, NSLock;

@interface SCROScriptClient : NSObject  {
    NSLock *_lock;
    SCROConnection *_connection;
    SCRCTargetSelectorTimer *_timer;
    BOOL _isReady;
}

+ (id)sharedScriptClient;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (BOOL)runScriptFile:(id)arg1;
- (void)_killConnection;
- (BOOL)_isReady;
- (void)handleCallback:(id)arg1;
- (id)_lazyConnection;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)autorelease;
- (id)init;
- (void)release;

@end
