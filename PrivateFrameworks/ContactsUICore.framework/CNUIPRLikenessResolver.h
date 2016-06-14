/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIPRLikenessResolver : NSObject <CNUIPRLikenessResolver> {
    CNContactStore * _contactStore;
    <CNUIPRLikenessProviderCache> * _likenessProviderCache;
    PRPersonaStore * _personaStore;
    long long  _prohibitedSources;
    <CNScheduler> * _scheduler;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) <CNUIPRLikenessProviderCache> *likenessProviderCache;
@property (nonatomic, readonly) PRPersonaStore *personaStore;
@property (nonatomic) long long prohibitedSources;
@property (nonatomic, readonly) <CNScheduler> *scheduler;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)contactStore;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 scheduler:(id)arg3;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 scheduler:(id)arg3 meMonitor:(id)arg4;
- (id)likenessProviderCache;
- (id)likenessesForContact:(id)arg1;
- (id)personaStore;
- (long long)prohibitedSources;
- (id)resolveLikenessesForContacts:(id)arg1 withContentHandler:(id /* block */)arg2;
- (id)scheduler;
- (void)setLikenessProviderCache:(id)arg1;
- (void)setProhibitedSources:(long long)arg1;

@end