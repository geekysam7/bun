enum SyntheticModuleType : uint32_t {
    JavaScript = 0,
    PackageJSONTypeModule = 1,
    Wasm = 2,
    ObjectModule = 3,
    File = 4,
    ESM = 5,
    JSONForObjectLoader = 6,

    // Built in modules are loaded through InternalModuleRegistry by numerical ID.
    // In this enum are represented as `(1 << 9) & id`
    InternalModuleRegistryFlag = 1 << 9,
    BunFFI = 512,
    BunSqlite = 513,
    InternalDebugger = 514,
    InternalFSCpSync = 515,
    InternalFSCp = 516,
    InternalShared = 517,
    NodeAssert = 518,
    NodeAssertStrict = 519,
    NodeAsyncHooks = 520,
    NodeChildProcess = 521,
    NodeCluster = 522,
    NodeConsole = 523,
    NodeCrypto = 524,
    NodeDgram = 525,
    NodeDiagnosticsChannel = 526,
    NodeDNS = 527,
    NodeDNSPromises = 528,
    NodeDomain = 529,
    NodeEvents = 530,
    NodeFS = 531,
    NodeFSPromises = 532,
    NodeHttp = 533,
    NodeHttp2 = 534,
    NodeHttps = 535,
    NodeInspector = 536,
    NodeNet = 537,
    NodeOS = 538,
    NodePathPosix = 539,
    NodePath = 540,
    NodePathWin32 = 541,
    NodePerfHooks = 542,
    NodePunycode = 543,
    NodeQuerystring = 544,
    NodeReadline = 545,
    NodeReadlinePromises = 546,
    NodeRepl = 547,
    NodeStreamConsumers = 548,
    NodeStream = 549,
    NodeStreamPromises = 550,
    NodeStreamWeb = 551,
    NodeTimers = 552,
    NodeTimersPromises = 553,
    NodeTLS = 554,
    NodeTraceEvents = 555,
    NodeTty = 556,
    NodeUrl = 557,
    NodeUtil = 558,
    NodeV8 = 559,
    NodeVM = 560,
    NodeWasi = 561,
    NodeWorkerThreads = 562,
    NodeZlib = 563,
    ThirdpartyDepd = 564,
    ThirdpartyDetectLibc = 565,
    ThirdpartyDetectLibcLinux = 566,
    ThirdpartyIsomorphicFetch = 567,
    ThirdpartyNodeFetch = 568,
    ThirdpartyUndici = 569,
    ThirdpartyVercelFetch = 570,
    ThirdpartyWS = 571,
    
    // Native modules run through the same system, but with different underlying initializers.
    // They also have bit 10 set to differentiate them from JS builtins.
    NativeModuleFlag = (1 << 10) | (1 << 9),
    BunObject = 1024,
    BunJSC = 1025,
    NodeBuffer = 1026,
    NodeConstants = 1027,
    NodeModule = 1028,
    NodeProcess = 1029,
    NodeStringDecoder = 1030,
    NodeUtilTypes = 1031,
    UTF8Validate = 1032,
};

