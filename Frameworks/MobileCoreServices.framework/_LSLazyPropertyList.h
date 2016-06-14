/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSLazyPropertyList : NSObject <NSCopying, NSSecureCoding> {
    bool  _peeking;
    NSDictionary * _plist;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_queue;
@property (getter=isPeeking) bool peeking;
@property (readonly) NSDictionary *propertyList;

+ (id)lazyPropertyListWithContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg1 table:(unsigned int)arg2 unit:(unsigned int)arg3;
+ (id)lazyPropertyListWithLazyPropertyLists:(id)arg1;
+ (id)lazyPropertyListWithPropertyList:(id)arg1;
+ (id)lazyPropertyListWithPropertyListData:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)_initWithPropertyList:(id)arg1;
- (id)_loadPropertyListPeeking:(bool)arg1;
- (id)_queue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isPeeking;
- (id)propertyList;
- (void)setPeeking:(bool)arg1;

@end