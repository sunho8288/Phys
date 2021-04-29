const int num = 3000;
int nTotal;
int nMuon;
double PUweight;
int evtnum;
int runnum;
int lumisection;
int nvertices;
// trig obj
int hlt_ntrig;
std::vector<std::string>* hlt_trigName;
std::vector<int>* hlt_trigPS;
int hlt_trigFired[num];
int hlt_trigType[num];
double hlt_trigPt[num];
double hlt_trigEta[num];
double hlt_trigPhi[num];

double muon_cktpt[num];
double muon_cktpx[num];
double muon_cktpy[num];
double muon_cktpz[num];
double muon_cktptError[num];
double muon_dxycktVTX[num];
double muon_dzcktVTX[num];

double muon_pt[num];
double muon_eta[num];
int muon_charge[num];
int muon_type[num];
double muon_phi[num];
double muon_px[num];
double muon_py[num];
double muon_pz[num];
//detector based
double muon_trkiso[num];
double muon_hcaliso[num];
double muon_ecaliso[num];
//pf based
double muon_PfChargedHadronIso[num];
double muon_PfNeutralHadronIso[num];
double muon_PfGammaIso[num]; 

double muon_chi2dof[num];
int muon_nhits[num];
int muon_trackerHits[num];
int muon_trackerLayers[num];
int muon_pixelHits[num];
int muon_muonHits[num];
int muon_nMatches[num];
double muon_dxyVTX[num];
double muon_dzVTX[num];
double muon_dxyBS[num];
double muon_dzBS[num];
std::vector<double>* CosAngle;

// dimuon
std::vector<double>* vtxTrkCkt1Pt;
std::vector<double>* vtxTrkCkt2Pt;
std::vector<double>* vtxTrkProb;
std::vector<double>* vtxTrkChi2;
std::vector<double>* vtxTrkNdof;
// dielectron
std::vector<double>* vtxTrkDiE1Pt;
std::vector<double>* vtxTrkDiE2Pt;
std::vector<double>* vtxTrkDiEProb;
std::vector<double>* vtxTrkDiEChi2;
std::vector<double>* vtxTrkDiENdof;
// emu
std::vector<double>* vtxTrkEMu1Pt;
std::vector<double>* vtxTrkEMu2Pt;
std::vector<double>* vtxTrkEMuProb;
std::vector<double>* vtxTrkEMuChi2;
std::vector<double>* vtxTrkEMuNdof;

// MET
double MET_pt;
double MET_px;
double MET_py;
double MET_phi;

// electron
int nelec;
double elec_e[num];
double elec_et[num];
double elec_etCorr[num];
double elec_pt[num];
double elec_px[num];
double elec_py[num];
double elec_pz[num];
double elec_pxCalib[num];
double elec_pyCalib[num];
double elec_pzCalib[num];
double elec_eta[num];
double elec_phi[num];
int elec_charge[num];
double elec_etaSC[num];
double elec_phiSC[num];
double elec_dEtaIn[num];
double elec_dPhiIn[num];
double elec_sigmaIEtaIEta[num];
double elec_HoverE[num];
double elec_fbrem[num];
double elec_energyEC[num];
double elec_Pnorm[num];
double elec_InvEminusInvP[num];
double elec_dxyVTX[num];
double elec_dzVTX[num];
double elec_AEff03[num];
double elec_chIso03[num];
double elec_nhIso03[num];
double elec_phIso03[num];
double elec_pcIso03[num];
double elec_relIsoCom03[num];
bool elec_hasConversion[num];
int elec_mHits[num];
int elec_ecalDriven[num];
int elec_crack[num];
double elec_25over55[num];
double elec_15over55[num];
double elec_isoHADDepth2[num];
double elec_isoEMHADDepth1[num];
double elec_isoPtTrks[num];
double elec_modIsoEMHADDepth1[num];
double elec_modIsoPtTrks[num];
double elec_gsfPt[num];
double elec_gsfEta[num];
double elec_gsfPhi[num];
double elec_rho[num];

// GenParticle
double genLepton_mother[num];
int genLepton_ID[num];
int genLepton_status[num];
int genLepton_charge[num];
double genLepton_phi[num];
double genLepton_pt[num];
double genLepton_eta[num];
double genLepton_px[num];
double genLepton_py[num];
double genLepton_pz[num];
int gnpair;

// jets
int njets;
double jet_pt[num];
double jet_eta[num];
double jet_phi[num];

// merged elec
int nTT;
double track_pT[num], track_eta[num], track_phi[num], track_charge[num];  
double elec_eoverp[num];