//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNContactAction.h>

@class CNUICoreRecentsManager, CNUIExternalComponentsFactory;

__attribute__((visibility("hidden")))
@interface CNContactDeleteContactAction : CNContactAction
{
    CNUIExternalComponentsFactory *_componentsFactory;
    CNUICoreRecentsManager *_recentsManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CNUICoreRecentsManager *recentsManager; // @synthesize recentsManager=_recentsManager;
@property(readonly, nonatomic) CNUIExternalComponentsFactory *componentsFactory; // @synthesize componentsFactory=_componentsFactory;
- (void)showDeleteFailureAlert;
- (_Bool)deleteContact;
- (void)performActionWithSender:(id)arg1;
- (id)initWithContact:(id)arg1 recentsManager:(id)arg2 componentsFactory:(id)arg3;

@end

