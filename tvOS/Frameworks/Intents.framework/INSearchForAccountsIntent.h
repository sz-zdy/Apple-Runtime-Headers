//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INSearchForAccountsIntentExport-Protocol.h>

@class INSpeakableString, NSString;

@interface INSearchForAccountsIntent : INIntent <INSearchForAccountsIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setRequestedBalanceType:(long long)arg1;
@property(readonly, nonatomic) long long requestedBalanceType;
- (void)setOrganizationName:(id)arg1;
@property(readonly, copy, nonatomic) INSpeakableString *organizationName;
- (void)setAccountType:(long long)arg1;
@property(readonly, nonatomic) long long accountType;
- (void)setAccountNickname:(id)arg1;
@property(readonly, copy, nonatomic) INSpeakableString *accountNickname;
- (id)initWithAccountNickname:(id)arg1 accountType:(long long)arg2 organizationName:(id)arg3 requestedBalanceType:(long long)arg4;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

