/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface TIAsset : NSObject {
    long long  _compatibilityVersion;
    long long  _contentVersion;
    NSArray * _contents;
    NSString * _inputModeLevel;
    long long  _numberOfAssertions;
    unsigned long long  _sizeInBytes;
    NSString * _type;
    NSURL * _url;
}

@property (nonatomic, readonly) long long compatibilityVersion;
@property (nonatomic, readonly) long long contentVersion;
@property (nonatomic, readonly) NSArray *contents;
@property (nonatomic, readonly) NSString *inputModeLevel;
@property (nonatomic, readonly) bool isCompatible;
@property (nonatomic, readonly) unsigned long long sizeInBytes;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSURL *url;

+ (id)knownAssetTypes;
+ (long long)supportedCompatibilityVersion;

- (void)addAssertion;
- (id)assetContentItemsForInputModeLevels:(id)arg1 contentType:(id)arg2;
- (long long)compatibilityVersion;
- (long long)contentVersion;
- (id)contents;
- (void)dealloc;
- (id)description;
- (bool)hasAssertions;
- (unsigned long long)hash;
- (id)initWithASAsset:(id)arg1;
- (id)initWithType:(id)arg1 level:(id)arg2 url:(id)arg3 contentVersion:(long long)arg4 compatibilityVersion:(long long)arg5 sizeInBytes:(unsigned long long)arg6 contents:(id)arg7;
- (id)inputModeLevel;
- (bool)isCompatible;
- (bool)isEqual:(id)arg1;
- (id)laterAsset:(id)arg1;
- (id)recursiveDescription;
- (void)removeAssertion;
- (unsigned long long)sizeInBytes;
- (id)type;
- (id)url;

@end