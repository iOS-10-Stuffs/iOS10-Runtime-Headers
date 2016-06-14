/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFUserAuthenticationModelSEP : NSObject <SBFUserAuthenticationModel> {
    <SBFUserAuthenticationModelDelegate> * _delegate;
    bool  _pendingWipe;
    bool  _permanentlyBlocked;
    SBSecurityDefaults * _securityDefaults;
    double  _unblockTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFUserAuthenticationModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPermanentlyBlocked, nonatomic, readonly) bool permanentlyBlocked;
@property (readonly) Class superclass;
@property (getter=isTemporarilyBlocked, nonatomic, readonly) bool temporarilyBlocked;
@property (nonatomic, readonly) double timeUntilUnblockedSinceReferenceDate;

- (void).cxx_destruct;
- (bool)_isDeviceWipePreferenceEnabled;
- (void)_refreshStateAndNotify:(bool)arg1;
- (void)_refreshStateForMkbState:(id)arg1 notify:(bool)arg2;
- (void)clearBlockedState;
- (id)delegate;
- (id)description;
- (id)descriptionBuilder;
- (id)init;
- (bool)isPermanentlyBlocked;
- (bool)isTemporarilyBlocked;
- (void)noteNewMkbDeviceLockStateInfo:(id)arg1 options:(id)arg2;
- (void)notePasscodeEntryBegan;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeUnlockFailedWithError:(id)arg1;
- (void)notePasscodeUnlockSucceeded;
- (void)performPasswordTest:(id /* block */)arg1;
- (void)refreshBlockedState;
- (void)setDelegate:(id)arg1;
- (void)synchronize;
- (double)timeUntilUnblockedSinceReferenceDate;

@end