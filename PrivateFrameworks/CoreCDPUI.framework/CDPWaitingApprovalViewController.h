/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPWaitingApprovalViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate> {
    <CDPWaitingApprovalDelegate> * _delegate;
    UIButton * _escapeButton;
    unsigned long long  _escapeOffer;
    UIActivityIndicatorView * _spinner;
    UILabel * _waitingLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long escapeOffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)escapeOffer;
- (void)escapeTapped:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)remoteApprovalSucceeded;
- (void)setEscapeOffer:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateUserInterfaceWithEscapeSelection:(unsigned long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
