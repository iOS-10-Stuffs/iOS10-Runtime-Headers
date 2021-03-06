/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTStateManager : NSObject {
    id /* block */  _callback;
    id /* block */  _callbackWithMessageAndTimestamp;
    NSXPCListener * _listener;
    VTXListenerDelegate * _listenerDelegate;
    bool  _needBatteryPolicyOverride;
    VTPhraseSpotter * _phraseSpotter;
    unsigned long long  _wakeGestureHostTime;
}

+ (id)_serviceClient;
+ (void)clearVoiceTriggerCount;
+ (bool)enabledByAssertion;
+ (id)firstChanceAudioBuffer;
+ (id)firstChanceTriggeredDate;
+ (id)firstChanceVTEventInfo;
+ (long long)getVoiceTriggerCount;
+ (bool)isLastTriggerForced;
+ (bool)isLastTriggerSecondChanceTriggered;
+ (bool)isRecording;
+ (void)notifyVoiceTriggeredSiriSessionCancelled;
+ (bool)onBattery;
+ (void)requestForcedSecondChance;
+ (void)requestForcedTriggerEvent;
+ (void)requestPhraseSpotterBypassing:(bool)arg1 timeout:(double)arg2;
+ (void)requestVoiceTriggerEnabled:(bool)arg1 forReason:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)getModel;
- (id)getPhraseSpotter;
- (id)initWithProperty:(id)arg1 callbackWithMessage:(id /* block */)arg2;
- (id)initWithProperty:(id)arg1 callbackWithMessageAndTimestamp:(id /* block */)arg2;
- (id)initWithStateTransitionCallback:(id /* block */)arg1;
- (bool)needBatteryPolicyOverride;
- (void)notify:(bool)arg1;
- (void)notifyWakeGestureHostTime:(unsigned long long)arg1;

@end
